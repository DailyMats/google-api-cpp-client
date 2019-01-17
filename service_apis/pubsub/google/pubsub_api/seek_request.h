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
#ifndef  GOOGLE_PUBSUB_API_SEEK_REQUEST_H_
#define  GOOGLE_PUBSUB_API_SEEK_REQUEST_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_pubsub_api {
using namespace googleapis;

/**
 * Request for the `Seek` method.
 * BETA: This feature is part of a beta release. This API might be
 * changed in backward-incompatible ways and is not recommended for production
 * use. It is not subject to any SLA or deprecation policy.
 *
 * @ingroup DataObject
 */
class SeekRequest : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static SeekRequest* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit SeekRequest(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit SeekRequest(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~SeekRequest();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_pubsub_api::SeekRequest</code>
   */
  const char* GetTypeName() const {
    return "google_pubsub_api::SeekRequest";
  }

  /**
   * Determine if the '<code>snapshot</code>' attribute was set.
   *
   * @return true if the '<code>snapshot</code>' attribute was set.
   */
  bool has_snapshot() const {
    return Storage().isMember("snapshot");
  }

  /**
   * Clears the '<code>snapshot</code>' attribute.
   */
  void clear_snapshot() {
    MutableStorage()->removeMember("snapshot");
  }


  /**
   * Get the value of the '<code>snapshot</code>' attribute.
   */
  const StringPiece get_snapshot() const {
    const Json::Value& v = Storage("snapshot");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>snapshot</code>' attribute.
   *
   * The snapshot to seek to. The snapshot's topic must be the same as that of
   * the provided subscription.
   * Format is `projects/{project}/snapshots/{snap}`.
   *
   * @param[in] value The new value.
   */
  void set_snapshot(const StringPiece& value) {
    *MutableStorage("snapshot") = value.data();
  }

  /**
   * Determine if the '<code>time</code>' attribute was set.
   *
   * @return true if the '<code>time</code>' attribute was set.
   */
  bool has_time() const {
    return Storage().isMember("time");
  }

  /**
   * Clears the '<code>time</code>' attribute.
   */
  void clear_time() {
    MutableStorage()->removeMember("time");
  }


  /**
   * Get the value of the '<code>time</code>' attribute.
   */
  const StringPiece get_time() const {
    const Json::Value& v = Storage("time");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>time</code>' attribute.
   *
   * The time to seek to.
   * Messages retained in the subscription that were published before this
   * time are marked as acknowledged, and messages retained in the
   * subscription that were published after this time are marked as
   * unacknowledged. Note that this operation affects only those messages
   * retained in the subscription (configured by the combination of
   * `message_retention_duration` and `retain_acked_messages`). For example,
   * if `time` corresponds to a point before the message retention
   * window (or to a point before the system's notion of the subscription
   * creation time), only retained messages will be marked as unacknowledged,
   * and already-expunged messages will not be restored.
   *
   * @param[in] value The new value.
   */
  void set_time(const StringPiece& value) {
    *MutableStorage("time") = value.data();
  }

 private:
  void operator=(const SeekRequest&);
};  // SeekRequest
}  // namespace google_pubsub_api
#endif  // GOOGLE_PUBSUB_API_SEEK_REQUEST_H_
