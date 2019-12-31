/* Generated by RuntimeBrowser.
 */

@protocol EMOutgoingMessageRepositoryInterface <NSObject>

@required

- (void)deleteDraftsInMailboxID:(EMMailboxObjectID *)arg1 documentID:(NSString *)arg2 previousDraftObjectID:(EMMessageObjectID *)arg3;
- (void)deliverMessage:(void *)arg1 usingMailDrop:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: EMOutgoingMessage *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, EMMessageDeliveryResult *, void*
- (void)isProcessingWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)numberOfPendingMessagesWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)outboxContainsMessageFromAccountObjectID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: EMObjectID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)processAllQueuedMessages;
- (void)resumeDeliveryQueue;
- (void)saveDraftMessage:(void *)arg1 mailboxID:(void *)arg2 previousDraftObjectID:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: EMOutgoingMessage *, EMMailboxObjectID *, EMMessageObjectID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, EMMessage *, void*
- (void)suspendDeliveryQueue;

@end
