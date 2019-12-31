/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPTopicBlacklist : NSObject {
    _PASNotificationToken * _assetUpdateNotificationToken;
    _PASLock * _lock;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)_loadAssetData;
- (void)dealloc;
- (id)indicesOfBlacklistedTopicsInRecordArray:(id)arg1;
- (id)indicesOfBlacklistedTopicsInScoredTopicArray:(id)arg1;
- (bool)shouldBlacklist:(id)arg1;

@end
