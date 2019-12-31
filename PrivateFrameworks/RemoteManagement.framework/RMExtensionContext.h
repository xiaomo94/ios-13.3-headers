/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMExtensionContext : NSExtensionContext <RMExtensionHostContext, RMExtensionVendorContext>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)fetchThenApplyConfigurationsWithCompletionHandler:(id /* block */)arg1;
- (void)queryStatusesOfTypes:(id)arg1 onBehalfOfAccount:(id)arg2 completionHandler:(id /* block */)arg3;

@end
