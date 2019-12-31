/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKSyncedMessage : NSObject {
    NSMutableSet * _attachmentsContentIdsNotYetSynced;
    bool  _contentRequestedByUser;
    unsigned long long  _contentResendInterval;
    bool  _contentSynced;
    bool  _contentSyncedBecauseUserRequested;
    bool  _contentSyncedUsingNotificationPriority;
    NSString * _conversationId;
    NSDate * _dateReceived;
    unsigned long long  _isSpecialMailboxSpecific;
    bool  _isThreadSpecific;
    NSString * _mailboxId;
    NSString * _messageId;
    unsigned long long  _resendInterval;
    bool  _resendRequested;
    NSString * _sanitizedMessageId;
    unsigned long long  _status;
    unsigned long long  _statusVersion;
    bool  _usedNotificationPriorityForMessageSync;
    bool  _usedProtectedChannelForMessageSync;
}

@property (nonatomic, retain) NSMutableSet *attachmentsContentIdsNotYetSynced;
@property (nonatomic) bool contentRequestedByUser;
@property (nonatomic) unsigned long long contentResendInterval;
@property (nonatomic) bool contentSynced;
@property (nonatomic) bool contentSyncedBecauseUserRequested;
@property (nonatomic) bool contentSyncedUsingNotificationPriority;
@property (nonatomic, retain) NSString *conversationId;
@property (nonatomic, retain) NSDate *dateReceived;
@property (nonatomic) unsigned long long isSpecialMailboxSpecific;
@property (nonatomic) bool isThreadSpecific;
@property (nonatomic, retain) NSString *mailboxId;
@property (nonatomic, retain) NSString *messageId;
@property (nonatomic) unsigned long long resendInterval;
@property (nonatomic) bool resendRequested;
@property (nonatomic, retain) NSString *sanitizedMessageId;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long statusVersion;
@property (nonatomic) bool usedNotificationPriorityForMessageSync;
@property (nonatomic) bool usedProtectedChannelForMessageSync;

- (void).cxx_destruct;
- (id)attachmentsContentIdsNotYetSynced;
- (bool)contentRequestedByUser;
- (unsigned long long)contentResendInterval;
- (bool)contentSynced;
- (bool)contentSyncedBecauseUserRequested;
- (bool)contentSyncedUsingNotificationPriority;
- (id)conversationId;
- (id)dateReceived;
- (id)init;
- (id)initWithMessage:(id)arg1;
- (id)initWithMessage:(id)arg1 useDefaultMailbox:(bool)arg2;
- (bool)isContentCompletelySynced;
- (unsigned long long)isSpecialMailboxSpecific;
- (bool)isThreadSpecific;
- (id)mailboxId;
- (id)messageId;
- (unsigned long long)resendInterval;
- (bool)resendRequested;
- (id)sanitizedMessageId;
- (void)setAttachmentsContentIdsNotYetSynced:(id)arg1;
- (void)setContentRequestedByUser:(bool)arg1;
- (void)setContentResendInterval:(unsigned long long)arg1;
- (void)setContentSynced:(bool)arg1;
- (void)setContentSyncedBecauseUserRequested:(bool)arg1;
- (void)setContentSyncedUsingNotificationPriority:(bool)arg1;
- (void)setConversationId:(id)arg1;
- (void)setDateReceived:(id)arg1;
- (void)setIsSpecialMailboxSpecific:(unsigned long long)arg1;
- (void)setIsThreadSpecific:(bool)arg1;
- (void)setMailboxId:(id)arg1;
- (void)setMessageId:(id)arg1;
- (void)setResendInterval:(unsigned long long)arg1;
- (void)setResendRequested:(bool)arg1;
- (void)setSanitizedMessageId:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (void)setStatusVersion:(unsigned long long)arg1;
- (void)setUsedNotificationPriorityForMessageSync:(bool)arg1;
- (void)setUsedProtectedChannelForMessageSync:(bool)arg1;
- (unsigned long long)status;
- (unsigned long long)statusVersion;
- (bool)usedNotificationPriorityForMessageSync;
- (bool)usedProtectedChannelForMessageSync;

@end
