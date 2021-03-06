/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGMemoryGenerator : NSObject {
    PGMemoryController * _controller;
    unsigned long long  _duration;
    bool  _isDebug;
    unsigned long long  _precision;
}

@property (readonly) bool canFallbackToDejunkAndDedupeForShowMore;
@property (readonly) PGMemoryController *controller;
@property unsigned long long duration;
@property bool isDebug;
@property unsigned long long precision;

+ (id)assetPropertySetsForMemories;
+ (long long)titleDateMatchingTypeForMemoryCategory:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_additionalInfoKeywordsForPotentialMemory:(id)arg1;
- (id)_createMemoryDebugWithPotentialMemory:(id)arg1;
- (void)_enumerateBestScoringPotentialMemoriesInPotentialMemories:(id)arg1 attemptUpgradesBeforeSorting:(bool)arg2 usingBlock:(id /* block */)arg3;
- (void)_enumeratePotentialMemoriesUsingBlock:(id /* block */)arg1;
- (bool)_eventIsAcceptableForUpgrade:(id)arg1;
- (void)_generateDefaultTitleAndSubtitleForMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_generateExtendedCuratedSetForMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_generateMemoryForDryTesting;
- (void)_mergeCurationSetsIfNeededForMemory:(id)arg1;
- (unsigned long long)_numberOfIndependentMomentNodesInMomentNodes:(id)arg1;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;
- (bool)canFallbackToDejunkAndDedupeForShowMore;
- (bool)canProceedAfterAttemptingMeaningfulEventUpgradeForPotentialMemory:(id)arg1 didUpgradeToWeekend:(bool)arg2 upgradedToMeaningfulEvent:(bool*)arg3;
- (bool)canProceedAfterAttemptingUpgradesForPotentialMemory:(id)arg1;
- (bool)canProceedAfterAttemptingWeekendUpgradeForPotentialMemory:(id)arg1 upgradedToWeekend:(bool*)arg2;
- (id)controller;
- (id)createMemoryWithPotentialMemory:(id)arg1;
- (unsigned long long)duration;
- (id)generateAllMemories;
- (id)generateMemories:(unsigned long long)arg1;
- (id)generateMemory;
- (id)initWithController:(id)arg1;
- (bool)isDebug;
- (unsigned long long)precision;
- (void)setDefaultValuesIfNeededOnNewMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)setDuration:(unsigned long long)arg1;
- (void)setIsDebug:(bool)arg1;
- (void)setPrecision:(unsigned long long)arg1;

@end
