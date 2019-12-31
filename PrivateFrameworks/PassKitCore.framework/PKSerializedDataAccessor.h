/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKSerializedDataAccessor : PKFileDataAccessor {
    NSData * _archiveData;
}

- (void).cxx_destruct;
- (void)_removeDiskRepresentation;
- (id)archiveData;
- (void)dealloc;
- (void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3 completion:(id /* block */)arg4;
- (void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithData:(id)arg1 error:(id*)arg2;

@end