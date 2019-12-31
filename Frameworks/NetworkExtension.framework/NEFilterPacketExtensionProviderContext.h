/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEFilterPacketExtensionProviderContext : NEFilterExtensionProviderContext {
    NSMutableDictionary * _interposes;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_nw_interpose> * _nw_interpose;
}

@property (retain) NSMutableDictionary *interposes;
@property (retain) NSObject<OS_nw_interpose> *nw_interpose;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)dealloc;
- (id)extensionPoint;
- (bool)interposeClaimWithUUID:(id)arg1;
- (void)interposeHandleFlowEvent:(int)arg1 interface:(id)arg2 flow_id:(unsigned char)arg3 nexus_instance:(unsigned char)arg4 nexus_port:(unsigned int)arg5 key:(void*)arg6 key_length:(unsigned int)arg7;
- (id)interposes;
- (id)nw_interpose;
- (void)setInterposes:(id)arg1;
- (void)setNw_interpose:(id)arg1;
- (void)startFilterWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stopWithReason:(int)arg1;

@end
