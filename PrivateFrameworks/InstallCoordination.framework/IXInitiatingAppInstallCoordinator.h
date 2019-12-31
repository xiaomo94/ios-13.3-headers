/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

@interface IXInitiatingAppInstallCoordinator : IXAppInstallCoordinator <IXCoordinatorWithAppAssetPromise, IXCoordinatorWithDeviceSecurityPromise, IXCoordinatorWithImportance, IXCoordinatorWithInitialODRAssetPromises, IXCoordinatorWithInstallOptions>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAppAssetPromise;
@property (nonatomic, readonly) bool hasInitialODRAssetPromises;
@property (nonatomic, readonly) bool hasInstallOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)coordinatorForAppWithBundleID:(id)arg1 withClientID:(unsigned long long)arg2 createIfNotExisting:(bool)arg3 created:(bool*)arg4 error:(id*)arg5;
+ (void)enumerateCoordinatorsUsingBlock:(id /* block */)arg1;
+ (bool)enumerateCoordinatorsWithError:(id*)arg1 usingBlock:(id /* block */)arg2;
+ (id)existingCoordinatorForAppWithBundleID:(id)arg1 error:(id*)arg2;

- (id)validInstallTypes;

@end
