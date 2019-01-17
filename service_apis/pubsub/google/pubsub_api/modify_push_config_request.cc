// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

// This code was generated by google-apis-code-generator 1.5.1

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Cloud Pub/Sub API (pubsub/v1)
// Description:
//   Provides reliable, many-to-many, asynchronous messaging between applications.
// Classes:
//   ModifyPushConfigRequest
// Documentation:
//   https://cloud.google.com/pubsub/docs

#include "google/pubsub_api/modify_push_config_request.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/pubsub_api/push_config.h"


#include <string>
#include "googleapis/strings/strcat.h"

namespace google_pubsub_api {
using namespace googleapis;


// Object factory method (static).
ModifyPushConfigRequest* ModifyPushConfigRequest::New() {
  return new client::JsonCppCapsule<ModifyPushConfigRequest>;
}

// Standard immutable constructor.
ModifyPushConfigRequest::ModifyPushConfigRequest(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
ModifyPushConfigRequest::ModifyPushConfigRequest(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
ModifyPushConfigRequest::~ModifyPushConfigRequest() {
}

// Properties.

const PushConfig ModifyPushConfigRequest::get_push_config() const {
   const Json::Value& storage = Storage("pushConfig");
   return client::JsonValueToCppValueHelper<PushConfig >(storage);
}

PushConfig ModifyPushConfigRequest::mutable_pushConfig() {
  Json::Value* storage = MutableStorage("pushConfig");
  return client::JsonValueToMutableCppValueHelper<PushConfig >(storage);
}
}  // namespace google_pubsub_api
