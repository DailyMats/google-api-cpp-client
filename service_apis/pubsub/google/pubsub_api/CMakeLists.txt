# This is a CMake file for Cloud Pub/Sub API v1
# using the Google APIs Client Library for C++.
#
# See http://google.github.io/google-api-cpp-client/latest/start/get_started
# for more information about what to do with this file.

project (google_pubsub_api)

# These sources assume that the CMakeLists.txt in ../.. added itself to
# the include directories so that include paths are specified explicitly
# with the directory #include "google/pubsub_api/..."
add_library(google_pubsub_api STATIC
            acknowledge_request.cc
            binding.cc
            create_snapshot_request.cc
            empty.cc
            expiration_policy.cc
            expr.cc
            list_snapshots_response.cc
            list_subscriptions_response.cc
            list_topic_snapshots_response.cc
            list_topic_subscriptions_response.cc
            list_topics_response.cc
            modify_ack_deadline_request.cc
            modify_push_config_request.cc
            policy.cc
            publish_request.cc
            publish_response.cc
            pubsub_message.cc
            pull_request.cc
            pull_response.cc
            push_config.cc
            received_message.cc
            seek_request.cc
            seek_response.cc
            set_iam_policy_request.cc
            snapshot.cc
            subscription.cc
            test_iam_permissions_request.cc
            test_iam_permissions_response.cc
            topic.cc
            update_snapshot_request.cc
            update_subscription_request.cc
            update_topic_request.cc
            pubsub_service.cc)
target_link_libraries(google_pubsub_api googleapis_http)
target_link_libraries(google_pubsub_api googleapis_internal)
target_link_libraries(google_pubsub_api googleapis_jsoncpp)
target_link_libraries(google_pubsub_api googleapis_utils)
