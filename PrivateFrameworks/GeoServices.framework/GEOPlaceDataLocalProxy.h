/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceDataLocalProxy : NSObject <GEOPlaceDataProxy> {
    geo_reentrant_isolater * _accessIsolater;
    GEOPDPlaceCache * _pdPlaceCache;
    _GEOPlaceDataPendingRequestManager * _pendingRequestManager;
    NSMapTable * _pendingRequests;
    NSMutableOrderedSet * _recentlySeenPlaceHashes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_callHistoryRecentsClearedObserver:(id)arg1;
- (void)_privacyAndLocationSettingsResetObserver:(id)arg1;
- (void)_requestIdentifiersFromNetwork:(id)arg1 resultProviderID:(int)arg2 traits:(id)arg3 auditToken:(id)arg4 throttleToken:(id)arg5 finished:(id /* block */)arg6 error:(id /* block */)arg7;
- (unsigned long long)calculateFreeableSpaceSync;
- (void)calculateFreeableSpaceWithHandler:(id /* block */)arg1;
- (void)cancelRequest:(id)arg1;
- (void)clearCache;
- (void)dealloc;
- (void)fetchAllCacheEntriesWithRequesterHandler:(id /* block */)arg1;
- (id)init;
- (void)performPlaceDataRequest:(id)arg1 traits:(id)arg2 cachePolicy:(unsigned long long)arg3 timeout:(double)arg4 auditToken:(id)arg5 throttleToken:(id)arg6 networkActivity:(id /* block */)arg7 requesterHandler:(id /* block */)arg8;
- (void)requestComponentsFromNetwork:(id)arg1 identifier:(id)arg2 resultProviderID:(int)arg3 traits:(id)arg4 auditToken:(id)arg5 throttleToken:(id)arg6 requesterHandler:(id /* block */)arg7;
- (void)requestIdentifiers:(id)arg1 resultProviderID:(int)arg2 traits:(id)arg3 options:(unsigned long long)arg4 auditToken:(id)arg5 throttleToken:(id)arg6 requesterHandler:(id /* block */)arg7;
- (void)requestPhoneNumbers:(id)arg1 allowCellularDataForLookup:(bool)arg2 traits:(id)arg3 auditToken:(id)arg4 throttleToken:(id)arg5 requesterHandler:(id /* block */)arg6;
- (void)shrinkBySize:(unsigned long long)arg1 finished:(id /* block */)arg2;
- (unsigned long long)shrinkBySizeSync:(unsigned long long)arg1;
- (void)startRequest:(id)arg1 traits:(id)arg2 timeout:(double)arg3 auditToken:(id)arg4 throttleToken:(id)arg5 finished:(id /* block */)arg6 networkActivity:(id /* block */)arg7 error:(id /* block */)arg8;
- (void)trackPlaceData:(id)arg1;

@end
