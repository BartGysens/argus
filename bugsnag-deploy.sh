#!/bin/bash -e

# Usage: bugsnag-deploy.sh [release-stage]
# release-stage           The release stage (Optional, defaults to “production”).
# Environment variable:
# BUGSNAG_API_KEY         The API key associated with the project.

RELEASE_STAGE=$1
if [ -z "$RELEASE_STAGE" ]; then
  RELEASE_STAGE="production"
fi

if [ -z $BUGSNAG_API_KEY ]; then
  echo "Bugsnag API key must be set"
  exit 1
fi

curl https://notify.bugsnag.com/deploy \
  -X POST \
  -d "apiKey=${BUGSNAG_API_KEY}&releaseStage=${RELEASE_STAGE}&repository=https://bitbucket.org/${BITBUCKET_REPO_OWNER}/${BITBUCKET_REPO_SLUG}&revision=${BITBUCKET_COMMIT}&branch=\"${BITBUCKET_BRANCH}\""