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
// Generated from:
//   Version: v1
//   Revision: 20181226
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.5
#ifndef  GOOGLE_PUBSUB_API_MODIFY_PUSH_CONFIG_REQUEST_H_
#define  GOOGLE_PUBSUB_API_MODIFY_PUSH_CONFIG_REQUEST_H_

#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/pubsub_api/push_config.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_pubsub_api {
using namespace googleapis;

/**
 * Request for the ModifyPushConfig method.
 *
 * @ingroup DataObject
 */
class ModifyPushConfigRequest : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static ModifyPushConfigRequest* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ModifyPushConfigRequest(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ModifyPushConfigRequest(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~ModifyPushConfigRequest();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_pubsub_api::ModifyPushConfigRequest</code>
   */
  const char* GetTypeName() const {
    return "google_pubsub_api::ModifyPushConfigRequest";
  }

  /**
   * Determine if the '<code>pushConfig</code>' attribute was set.
   *
   * @return true if the '<code>pushConfig</code>' attribute was set.
   */
  bool has_push_config() const {
    return Storage().isMember("pushConfig");
  }

  /**
   * Clears the '<code>pushConfig</code>' attribute.
   */
  void clear_push_config() {
    MutableStorage()->removeMember("pushConfig");
  }


  /**
   * Get a reference to the value of the '<code>pushConfig</code>' attribute.
   */
  const PushConfig get_push_config() const;

  /**
   * Gets a reference to a mutable value of the '<code>pushConfig</code>'
   * property.
   *
   * The push configuration for future deliveries.
   *
   * An empty `pushConfig` indicates that the Pub/Sub system should
   * stop pushing messages from the given subscription and allow
   * messages to be pulled and acknowledged - effectively pausing
   * the subscription if `Pull` or `StreamingPull` is not called.
   *
   * @return The result can be modified to change the attribute value.
   */
  PushConfig mutable_pushConfig();

 private:
  void operator=(const ModifyPushConfigRequest&);
};  // ModifyPushConfigRequest
}  // namespace google_pubsub_api
#endif  // GOOGLE_PUBSUB_API_MODIFY_PUSH_CONFIG_REQUEST_H_
