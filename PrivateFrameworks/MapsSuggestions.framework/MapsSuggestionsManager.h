/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsManager : NSObject <MapsSuggestionsLocationUpdaterDelegate, MapsSuggestionsObject, MapsSuggestionsSourceDelegate> {
    struct NSMutableDictionary { Class x1; } * _additionalFiltersPerSink;
    GEOAutomobileOptions * _automobileOptions;
    unsigned long long  _countToRequest;
    int  _defaultTansportType;
    MapsSuggestionsCanKicker * _deferredSourcesUpdater;
    bool  _dirtyFlag;
    NSDate * _etaValidUntil;
    MapsSuggestionsCanKicker * _expiredEntryInvalidator;
    MapsSuggestionsFakePullSource * _fakeSource;
    NSObject<OS_dispatch_queue> * _gatheringQueue;
    struct NSArray { Class x1; } * _latestResults;
    <MapsSuggestionsLocationUpdater> * _locationUpdater;
    int  _mapType;
    NSHashTable * _sinks;
    struct NSMutableSet { Class x1; } * _sources;
    struct NSMutableDictionary { Class x1; } * _storage;
    NSObject<OS_dispatch_queue> * _storageQueue;
    <MapsSuggestionsStrategy> * _strategy;
    long long  _style;
    MapsSuggestionsTracker * _tracker;
    MapsSuggestionsCanKicker * _wipeStaleETAWiper;
}

@property (nonatomic, retain) GEOAutomobileOptions *automobileOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MapsSuggestionsFakePullSource *fakeSource;
@property (readonly) unsigned long long hash;
@property (nonatomic) <MapsSuggestionsLocationUpdater> *locationUpdater;
@property (nonatomic) int mapType;
@property (nonatomic, retain) <MapsSuggestionsStrategy> *strategy;
@property (nonatomic) long long style;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (unsigned long long)_addOrUpdateSuggestionEntries:(struct NSArray { Class x1; }*)arg1 source:(struct NSString { Class x1; }*)arg2;
- (unsigned long long)_deleteEntries:(struct NSArray { Class x1; }*)arg1 source:(struct NSString { Class x1; }*)arg2;
- (struct NSArray { Class x1; }*)_filteredEntries:(struct NSArray { Class x1; }*)arg1 forSink:(struct NSString { Class x1; }*)arg2 limit:(unsigned long long)arg3;
- (bool)_loadStorageFromFile:(id)arg1;
- (struct NSArray { Class x1; }*)_pruneExpiredFromEntries:(struct NSArray { Class x1; }*)arg1;
- (void)_pruneExpiredSourceEntries;
- (bool)_removeEntry:(id)arg1;
- (bool)_removeEntry:(id)arg1 sourceName:(struct NSString { Class x1; }*)arg2;
- (void)_restartLocationUpdaterIfNeeded;
- (void)_scheduleInvalidateSinksOnFirstExpiredOfEntries:(struct NSArray { Class x1; }*)arg1;
- (void)_sendInvalidateToAllSinks;
- (bool)_sink:(struct NSString { Class x1; }*)arg1 allowsEntry:(id)arg2;
- (void)_startAllSources;
- (void)_startLocationUpdater;
- (void)_startSource:(id)arg1;
- (void)_stopAllSources;
- (void)_stopLocationUpdater;
- (void)_updateAllSourcesOnce;
- (void)_updateCurrentLocation:(id)arg1;
- (bool)_updateResult;
- (void)_updateSource:(id)arg1 forType:(long long)arg2 repeat:(bool)arg3;
- (void)_updateSource:(id)arg1 repeat:(bool)arg2;
- (void)_wipeStaleETAs;
- (void)addAdditionalFilter:(id)arg1 forSink:(struct NSString { Class x1; }*)arg2;
- (unsigned long long)addOrUpdateSuggestionEntries:(struct NSArray { Class x1; }*)arg1 source:(struct NSString { Class x1; }*)arg2;
- (void)attachSink:(id)arg1;
- (bool)attachSource:(id)arg1;
- (id)automobileOptions;
- (void)awaitGatheringQueue;
- (void)awaitStorageQueue;
- (unsigned long long)clearAllEntriesFromSource:(struct NSString { Class x1; }*)arg1;
- (void)clearResults;
- (void)dealloc;
- (unsigned long long)deleteEntries:(struct NSArray { Class x1; }*)arg1 source:(struct NSString { Class x1; }*)arg2;
- (bool)detachSink:(id)arg1;
- (bool)detachSource:(id)arg1;
- (id)dumpStorage;
- (id)fakeSource;
- (void)feedbackForContact:(id)arg1 action:(long long)arg2;
- (void)feedbackForEntry:(id)arg1 action:(long long)arg2;
- (void)feedbackForMapItem:(id)arg1 action:(long long)arg2;
- (void)hintRefreshOfType:(long long)arg1;
- (id)initWithStrategy:(id)arg1 locationUpdater:(id)arg2 ETARequirements:(id)arg3;
- (bool)loadStorageFromFile:(id)arg1;
- (bool)loadStorageFromFile:(id)arg1 callback:(id /* block */)arg2 callbackQueue:(id)arg3;
- (id)locationUpdater;
- (int)mapType;
- (void)removeAdditionalFilter:(id)arg1 forSink:(struct NSString { Class x1; }*)arg2;
- (bool)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(id /* block */)arg3;
- (bool)saveStorageToFile:(id)arg1;
- (void)scheduleUpdateAllSourcesOnce;
- (void)sendInvalidateToAllSinks;
- (void)setAutomobileOptions:(id)arg1;
- (void)setFakeSource:(id)arg1;
- (void)setLocationUpdater:(id)arg1;
- (void)setMapType:(int)arg1;
- (void)setStrategy:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTitleFormatter:(id)arg1 forType:(long long)arg2;
- (struct NSSet { Class x1; }*)sinks;
- (struct NSSet { Class x1; }*)sources;
- (struct NSDictionary { Class x1; }*)storage;
- (struct NSArray { Class x1; }*)storageForSource:(id)arg1;
- (id)strategy;
- (long long)style;
- (bool)topSuggestionsForSink:(id)arg1 count:(unsigned long long)arg2 transportType:(int)arg3 callback:(id /* block */)arg4 onQueue:(id)arg5;
- (void)trackerRefreshedETAsUntil:(id)arg1;
- (struct NSString { Class x1; }*)uniqueName;
- (void)updateLocation:(id)arg1;

@end
