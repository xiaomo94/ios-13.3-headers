/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

@interface EDSearchableIndexItem : NSObject <EDIndexableItem, EFLoggable> {
    NSData * _bodyData;
    bool  _fetchBody;
    bool  _hasCompleteData;
    NSString * _identifier;
    long long  _indexingType;
    unsigned long long  _itemInstantiationTime;
    <EDIndexableMessage> * _message;
    CSSearchableItem * _searchableItem;
}

@property (nonatomic, readonly) bool alwaysMarkAsIndexed;
@property (nonatomic, retain) NSData *bodyData;
@property (nonatomic, readonly) NSDate *dateReceived;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *domainIdentifier;
@property (nonatomic, readonly) unsigned long long estimatedSizeInBytes;
@property (nonatomic, readonly) bool fetchBody;
@property (nonatomic) bool hasCompleteData;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic) long long indexingType;
@property (nonatomic, readonly) unsigned long long itemInstantiationTime;
@property (nonatomic, readonly) <EDIndexableMessage> *message;
@property (nonatomic, readonly) bool requiresPreprocessing;
@property (nonatomic, readonly) bool shouldExcludeFromIndex;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSData *underlyingData;

+ (id)accountIdentifierForMessage:(id)arg1;
+ (id)csIdentifierForMailbox:(id)arg1;
+ (id)domainIdentifierForAccountID:(id)arg1 mailboxPersistentID:(id)arg2;
+ (id)domainIdentifierForMessage:(id)arg1;
+ (long long)indexingPriorityByIndexingType:(long long)arg1;
+ (id)itemWithIdentifier:(id)arg1 message:(id)arg2 bodyData:(id)arg3 fetchBody:(bool)arg4;
+ (id)itemWithMessage:(id)arg1 bodyData:(id)arg2 fetchBody:(bool)arg3;
+ (id)log;
+ (void)mailboxIdentifiersForMessage:(id)arg1 result:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_addStaticAttributesToAttributeSet:(id)arg1;
- (void)addAttachmentAttributesToAttributeSet:(id)arg1;
- (void)addFlagsAttributesToAttributeSet:(id)arg1;
- (void)addStaticAttributesToAttributeSet:(id)arg1;
- (void)addUpdatableAttributesToAttributeSet:(id)arg1;
- (bool)alwaysMarkAsIndexed;
- (id)bodyData;
- (long long)compare:(id)arg1;
- (id)dateReceived;
- (id)domainIdentifier;
- (unsigned long long)estimatedSizeInBytes;
- (bool)fetchBody;
- (id)fetchIndexableAttachments;
- (bool)hasCompleteData;
- (id)identifier;
- (long long)indexingType;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 message:(id)arg2 bodyData:(id)arg3 fetchBody:(bool)arg4;
- (id)initWithMessage:(id)arg1 bodyData:(id)arg2 fetchBody:(bool)arg3;
- (unsigned long long)itemInstantiationTime;
- (id)message;
- (bool)requiresPreprocessing;
- (id)searchableItem;
- (void)setBodyData:(id)arg1;
- (void)setHasCompleteData:(bool)arg1;
- (void)setIndexingType:(long long)arg1;
- (void)setNeedsAllAttributesIndexingType;
- (void)setUnderlyingData:(id)arg1;
- (bool)shouldExcludeFromIndex;
- (id)underlyingData;

@end
