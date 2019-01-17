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
#ifndef  GOOGLE_PUBSUB_API_PULL_RESPONSE_H_
#define  GOOGLE_PUBSUB_API_PULL_RESPONSE_H_

#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/pubsub_api/received_message.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_pubsub_api {
using namespace googleapis;

/**
 * Response for the `Pull` method.
 *
 * @ingroup DataObject
 */
class PullResponse : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static PullResponse* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit PullResponse(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit PullResponse(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~PullResponse();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_pubsub_api::PullResponse</code>
   */
  const char* GetTypeName() const {
    return "google_pubsub_api::PullResponse";
  }

  /**
   * Determine if the '<code>receivedMessages</code>' attribute was set.
   *
   * @return true if the '<code>receivedMessages</code>' attribute was set.
   */
  bool has_received_messages() const {
    return Storage().isMember("receivedMessages");
  }

  /**
   * Clears the '<code>receivedMessages</code>' attribute.
   */
  void clear_received_messages() {
    MutableStorage()->removeMember("receivedMessages");
  }


  /**
   * Get a reference to the value of the '<code>receivedMessages</code>'
   * attribute.
   */
  const client::JsonCppArray<ReceivedMessage > get_received_messages() const;

  /**
   * Gets a reference to a mutable value of the '<code>receivedMessages</code>'
   * property.
   *
   * Received Pub/Sub messages. The list will be empty if there are no more
   * messages available in the backlog. For JSON, the response can be entirely
   * empty. The Pub/Sub system may return fewer than the `maxMessages` requested
   * even if there are more messages available in the backlog.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<ReceivedMessage > mutable_receivedMessages();

 private:
  void operator=(const PullResponse&);
};  // PullResponse
}  // namespace google_pubsub_api
#endif  // GOOGLE_PUBSUB_API_PULL_RESPONSE_H_
