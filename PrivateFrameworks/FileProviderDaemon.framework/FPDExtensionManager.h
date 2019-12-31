/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

@interface FPDExtensionManager : NSObject {
    struct NSMutableDictionary { Class x1; } * _alternateContentsURLDictionary;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    id  _matchingContext;
    NSMutableDictionary * _providersByIdentifier;
    NSObject<OS_dispatch_group> * _providersLoadedGroup;
    FPDPushConnection * _pushConnection;
    FPDServer * _server;
    NSMapTable * _sessionQueueForExtensionIdentifier;
}

@property (nonatomic, readonly) FPDPushConnection *pushConnection;
@property (nonatomic) FPDServer *server;

- (void).cxx_destruct;
- (id)_deserializedAlternateContentsDictionary;
- (id)_domainForURL:(id)arg1;
- (void)_garbageCollectRemovedProvidersForInstalledProviderIdentifiers:(id)arg1;
- (void)_loadAlternateContentsDictionary;
- (void)_serializeAlternateContentsURLDictionary:(struct NSMutableDictionary { Class x1; }*)arg1;
- (void)_updateProviderListForMatchingExtensions:(id)arg1 allExtensionStartedHandler:(id /* block */)arg2;
- (void)afterFirstDiscovery;
- (id)allProviders;
- (id)alternateContentsDictionaryForProviderIdentifier:(id)arg1;
- (id)alternateContentsURLForItemID:(id)arg1;
- (id)clouddocsExtensionIdentifier;
- (id)domainForActionOperationLocator:(id)arg1;
- (id)domainForURL:(id)arg1;
- (id)domainFromItemID:(id)arg1;
- (void)dropLegacyDaemonCoreSpotlightIndexIfNeeded;
- (id)extensionsByID:(id)arg1;
- (void)garbageCollectDomainOwnedDirectoriesAtURL:(id)arg1 isUserData:(bool)arg2 installedProviderIdentifiers:(id)arg3;
- (id)initWithServer:(id)arg1;
- (void)loadProvidersAndMonitorWithUpdateHandler:(id /* block */)arg1;
- (void)migrateEnabledStateIfNecessary:(id)arg1;
- (id)nonEvictableSizeByProviderDomain;
- (id)providerDomainsByID;
- (id)providerDomainsByIDFromExtensionsByID:(id)arg1;
- (id)providerWithIdentifier:(id)arg1;
- (id)providerWithTopLevelBundleIdentifier:(id)arg1;
- (id)pushConnection;
- (id)server;
- (void)setAlternateContentsURL:(id)arg1 forItemID:(id)arg2;
- (void)setServer:(id)arg1;
- (id)uniquedExtensions:(id)arg1;
- (id)xattrForName:(id)arg1 url:(id)arg2;

@end
