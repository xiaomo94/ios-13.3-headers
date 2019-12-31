/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIInputContextHistory : NSObject <NSCopying, NSSecureCoding> {
    NSMutableArray * _entries;
    NSMutableArray * _pendingEntries;
    NSSet * _recipientIdentifiers;
    NSSet * _senderIdentifiers;
}

@property (nonatomic, readonly) NSString *aggregateText;
@property (nonatomic, readonly) NSArray *entries;
@property (nonatomic, readonly) NSString *mostRecentNonSenderTextEntry;
@property (nonatomic, readonly) bool mostRecentTextEntryIsByMe;
@property (nonatomic, readonly) NSString *mostRecentTextEntryLogString;
@property (nonatomic, readonly) NSArray *pendingEntries;
@property (nonatomic, readonly) NSSet *recipientIdentifiers;
@property (nonatomic, readonly) NSString *senderIdentifier;
@property (nonatomic, readonly) NSSet *senderIdentifiers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_enumerateAllEntriesAsInputContextEntries:(id /* block */)arg1;
- (void)addTextEntry:(id)arg1 timestamp:(id)arg2;
- (void)addTextEntry:(id)arg1 timestamp:(id)arg2 senderIdentifier:(id)arg3;
- (id)aggregateText;
- (void)appendPendingEntriesFromInputContextHistory:(id)arg1;
- (void)assertCheckpointForCoding;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)entries;
- (void)enumerateAllEntries:(id /* block */)arg1;
- (void)enumeratePendingEntries:(id /* block */)arg1;
- (bool)hasPendingEntries;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecipientIdentifiers:(id)arg1;
- (id)initWithRecipientIdentifiers:(id)arg1 senderIdentifier:(id)arg2;
- (id)initWithRecipientIdentifiers:(id)arg1 senderIdentifiers:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mostRecentNonSenderTextEntry;
- (id)mostRecentTextEntries:(unsigned long long)arg1;
- (bool)mostRecentTextEntryIsByMe;
- (id)mostRecentTextEntryLogString;
- (id)pendingEntries;
- (id)recipientIdentifiers;
- (id)senderIdentifier;
- (id)senderIdentifiers;

@end
