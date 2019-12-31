/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNGeminiManager : NSObject <CoreTelephonyClientDelegate, TUCallProviderManagerDelegate> {
    TUCallProviderManager * _callProviderManager;
    CoreTelephonyClient * _coreTelephonyClient;
    unsigned long long  _dataSourceExclusions;
    NSMapTable * _delegateToQueue;
    CNContactsEnvironment * _environment;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) TUCallProviderManager *callProviderManager;
@property (nonatomic, retain) CoreTelephonyClient *coreTelephonyClient;
@property (nonatomic) unsigned long long dataSourceExclusions;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSMapTable *delegateToQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNContactsEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

+ (id)cellularPlanManager;
+ (id)channelStringFromSenderIdentity:(id)arg1;
+ (id)descriptorForRequiredKeys;
+ (bool)deviceSupportsGemini;
+ (bool)useFakeData;

- (void).cxx_destruct;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)badgeLabelForSenderIdentity:(id)arg1 error:(id*)arg2;
- (id)badgeLabelForSubscription:(id)arg1 error:(id*)arg2;
- (id)bestChannelIdentifierForPhoneNumbers:(id)arg1 fromChannelIdentifiers:(id)arg2 defaultChannelIdentifier:(id)arg3;
- (id)bestSenderIdentityForContact:(id)arg1 error:(id*)arg2;
- (id)bestSenderIdentityForFavoritesEntry:(id)arg1 error:(id*)arg2;
- (id)bestSenderIdentityForHandle:(id)arg1 contactStore:(id)arg2 error:(id*)arg3;
- (id)bestSubscriptionForContact:(id)arg1 error:(id*)arg2;
- (id)bestSubscriptionForHandle:(id)arg1 contactStore:(id)arg2 error:(id*)arg3;
- (id)callProviderManager;
- (id)channelForContact:(id)arg1 error:(id*)arg2;
- (id)channelForFavoritesEntry:(id)arg1 error:(id*)arg2;
- (id)channelForFavoritesEntry:(id)arg1 includeDanglingChannels:(bool)arg2 error:(id*)arg3;
- (id)channelForPreferredChannelString:(id)arg1 fromChannels:(id)arg2 synthesizeMissingChannels:(bool)arg3;
- (id)channelIdentifierForMostRecentCallFromPhoneNumbers:(id)arg1 fromChannelIdentifiers:(id)arg2;
- (id)channelIdentifierForMostRecentSMSFromPhoneNumbers:(id)arg1 fromChannelIdentifiers:(id)arg2;
- (id)channelsByIdentifierIncludingDanglingPlans:(bool)arg1 defaultChannel:(id*)arg2 availableChannels:(id*)arg3;
- (id)contactForPhoneString:(id)arg1 contactStore:(id)arg2;
- (id)coreTelephonyClient;
- (void)danglingPlansDidUpdate:(id)arg1;
- (unsigned long long)dataSourceExclusions;
- (id)defaultSenderIdentityForInteractionsFromSenderIdentities:(id)arg1;
- (id)delegateToQueue;
- (id)environment;
- (id)fakeSenderIdentities;
- (id)fetchedSenderIdentitiesWithError:(id*)arg1;
- (id)fetchedSubscriptionForSenderIdentity:(id)arg1;
- (id)fetchedSubscriptionsWithError:(id*)arg1;
- (id)geminiResultForContact:(id)arg1 error:(id*)arg2;
- (id)geminiResultForContact:(id)arg1 substituteDefaultForDangling:(bool)arg2 error:(id*)arg3;
- (id)geminiResultForHandle:(id)arg1 contactStore:(id)arg2 error:(id*)arg3;
- (id)geminiResultForHandle:(id)arg1 contactStore:(id)arg2 substituteDefaultForDangling:(bool)arg3 error:(id*)arg4;
- (id)init;
- (id)initWithCallProviderManager:(id)arg1;
- (id)initWithEnvironment:(id)arg1 coreTelephonyClient:(id)arg2 callProviderManager:(id)arg3;
- (bool)isReferencedByCallHistoryForSenderLabelIdentifier:(id)arg1;
- (bool)isReferencedByContactsForSenderLabelIdentifier:(id)arg1 store:(id)arg2;
- (bool)isReferencedByMessagesForSenderLabelIdentifier:(id)arg1;
- (bool)isReferencedSenderLabelIdentifier:(id)arg1;
- (id)mostRecentChannelIdentifierForPhoneNumbers:(id)arg1 fromChannelIdentifiers:(id)arg2;
- (void)notifyDelegateOfChannelUpdates;
- (void)providersChangedForProviderManager:(id)arg1;
- (id)queue;
- (bool)remapChannelIdentifier:(id)arg1 toIdentifier:(id)arg2 error:(id*)arg3;
- (bool)remapContactsHavingPreferredChannelIdentifier:(id)arg1 toPreferredChannelIdentifier:(id)arg2 contactStore:(id)arg3 error:(id*)arg4;
- (bool)remapMessagesHavingChannelIdentifier:(id)arg1 toChannelIdentifier:(id)arg2 error:(id*)arg3;
- (bool)remapRecentCallsHavingChannelIdentifier:(id)arg1 toChannelIdentifier:(id)arg2 error:(id*)arg3;
- (id)remoteBestSenderIdentityForHandle:(id)arg1 contactStore:(id)arg2 error:(id*)arg3;
- (id)remoteGeminiResultForContact:(id)arg1 substituteDefaultForDangling:(bool)arg2 error:(id*)arg3;
- (void)removeDelegate:(id)arg1;
- (id)senderIdentityMatchingPhoneNumber:(id)arg1 fromSenderIdentities:(id)arg2;
- (id)senderIdentityMatchingUUID:(id)arg1 fromSenderIdentities:(id)arg2;
- (void)setCallProviderManager:(id)arg1;
- (void)setCoreTelephonyClient:(id)arg1;
- (void)setDataSourceExclusions:(unsigned long long)arg1;
- (void)setDelegateToQueue:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)subscriptionInfoDidChange;
- (void)updateOutgoingLocalParticipantUUID:(id)arg1 forCallsWithLocalParticipantUUID:(id)arg2;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

+ (id)badgeForSenderIdentity:(id)arg1;
+ (id)badgeForSubscription:(id)arg1;
+ (id)badgeForText:(id)arg1;

@end
