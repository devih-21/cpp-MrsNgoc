#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int testCase;
    cin >> testCase;
    while(testCase--){
        int length;
        cin >> length;
        vector <int> numVec;
        numVec.assign(length, 0);
        for(int i = 0; i < length; i++){
            cin >> numVec[i];
        }
        sort(numVec.begin(), numVec.end());
        for(int i = 0; i < length - 1; i++){
            if(i % 2 != 0){
                swap(numVec[i], numVec[i+1]);
            }
        }

        for(int i = 0; i < length; i++){
            cout << numVec[i] << " ";
        }
        cout << endl;
    }
}

{
  "dropTargetOverlayVisible": false,
  "isCreatingNewGroupChat": false,
  "newGroupName": "",
  "infoPanelCollapsed": false,
  "activeThreadID": "user:100018073392157",
  "composerState": "d(2) {\"step\" => \"NULL\", \"recipients\" => Q(0)}",
  "messengerState": {
    "activeThreadID": "user:100018073392157",
    "folderKey": null,
    "detailView": "detail/thread",
    "filter": "all",
    "folder": "inbox",
    "masterView": "master/recent",
    "serverThreadID": "100018073392157",
    "extraQueryParams": "{_rdr: null}",
    "threadsIDs": null,
    "threadIDs": null
  },
  "contactData": {
    "contact": "{accepts_messenger_user_feedback: false, big_image_…}",
    "platform": "<g />",
    "isUserActive": false,
    "availabilityStatusData": null,
    "lastActiveTS": 0,
    "lastActive": null
  },
  "activeThread": {
    "admins": "{}",
    "approval_mode": null,
    "approval_queue_ids": "[]",
    "can_reply": true,
    "cannot_reply_reason": null,
    "can_viewer_report": true,
    "composer_input_disabled": null,
    "solid_color": "#B841D9",
    "header_color": "#F29DD6",
    "footer_color": "#9D52FF",
    "accessibility_label": "TinyTAN",
    "reverse_gradients_for_radial": false,
    "gradient_colors": "[\"#F29DD6\", \"#B841D9\", \"#9D52FF\"]",
    "theme_id": "1551636028357160",
    "thread_connectivity_data": "{connectivity_status: \"IMPLICIT_OR_TWO_WAY_MESSAGIN…}",
    "custom_like_icon": "{emoji: \"👊\"}",
    "custom_nickname": "{100013287096591: \"người thầy ưu tú\", 1000180733921…}",
    "customization_enabled": true,
    "thread_type": 1,
    "group_thread_subtype": null,
    "participant_add_mode": null,
    "ephemeral_ttl_mode": 0,
    "folder": "inbox",
    "has_email_participant": false,
    "has_montage": true,
    "unread_mentions_count": 0,
    "image_src": null,
    "square_image_src": null,
    "is_archived": false,
    "is_pinned": false,
    "is_page_follow_up": false,
    "is_page_unresponded_thread": false,
    "is_canonical_user": true,
    "is_canonical": true,
    "is_from_weak_entry_point": false,
    "is_pin_protected": false,
    "is_subscribed": true,
    "is_other_recipient_page": false,
    "is_canonical_neo_user": false,
    "is_thread_queue_enabled": false,
    "joinable_mode": "{link: \"\", mode: 0}",
    "last_message_timestamp": 1607352262026,
    "last_message_id": null,
    "last_message_type": null,
    "last_message_unsendability_status": "deny_for_non_sender",
    "last_read_timestamp": 1607352262026,
    "lightweight_event": null,
    "lightweight_events": "{}",
    "message_count": 39964,
    "mute_until": null,
    "name": "",
    "object_association_type": null,
    "other_user_fbid": "100018073392157",
    "page_thread_info": null,
    "participants": "[\"fbid:100018073392157\", \"fbid:100013287096591\"]",
    "participants_event_status": "[]",
    "preloaded_participants": "[{…}, {…}]",
    "read_only": false,
    "recipients_loadable": true,
    "server_timestamp": 1607352262026,
    "snippet_attachments": "[]",
    "snippet_sender": "fbid:100018073392157",
    "snippet": "M muốn đấm vào mặt t à",
    "thread_fbid": "100018073392157",
    "thread_id": "user:100018073392157",
    "thread_pin_timestamp": 0,
    "timestamp": 1607352262026,
    "unread_count": 0,
    "rtc_call_data": "{call_state: \"NO_ONGOING_CALL\", initiator_fbid: nul…}",
    "marketplace_thread_data": null,
    "associated_object": null,
    "reactions_mute_mode": 0,
    "mentions_mute_mode": 0,
    "comm_status": null,
    "page_comm_item_id": null,
    "comm_source_id": null,
    "subtitle": null,
    "comm_item_owners": null,
    "comm_icon_type": "[]",
    "group_approval_queue": "[]",
    "game_id": null,
    "admin_model_status": null,
    "groups_sync_status": null,
    "work_associated_group": null,
    "pinned_messages": "[]",
    "description": null,
    "joinable_link": null,
    "linked_mentorship_programs": "{nodes: Array(0)}",
    "thread_unsendability_status": "can_unsend",
    "is_business_page_active": false,
    "thread_associated_job_applications": "{nodes: Array(0)}",
    "thread_associated_page_admin": null,
    "graphql_token": "bWVzc2FnZV90aHJlYWQ6MTAwMDE4MDczMzkyMTU3",
    "conversion_detection_data": "{conversion_type: null, currency_amount: null, curr…}",
    "suggested_reply_data": "{suggestion_content: null, suggestion_type: null, t…}",
    "constructor": "ƒ a() {}"
  },
  "participants": "O(2) {\"fbid:100018073392157\" => {…}, \"fbid:1000132870965…}",
  "searchResults": {
    "activeThreadID": null,
    "downExhausted": null,
    "loading": false,
    "messages": null,
    "query": null,
    "results": "Q(0) {}",
    "selectedIndex": 0,
    "threadID": null,
    "totalCount": 0,
    "upExhausted": null,
    "threads": null,
    "threadsExhausted": null,
    "scrolledToMid": false,
    "mid": null
  },
  "uploadFilesState": "O(0) {}",
  "sharePreviewState": "O(0) {}",
  "workChatContentAppsState": "O(0) {}",
  "hideGroupInfoInThreadInfoPanel": false,
  "hideContextBanner": false,
  "openPostComposerInSameWindow": false
}