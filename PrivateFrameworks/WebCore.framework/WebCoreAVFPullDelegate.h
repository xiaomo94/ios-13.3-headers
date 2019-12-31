/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCoreAVFPullDelegate : NSObject <AVPlayerItemOutputPullDelegate> {
    struct WeakPtr<WebCore::MediaPlayerPrivateAVFoundationObjC> { 
        struct RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > { 
            struct WeakPtrImpl {} *m_ptr; 
        } m_impl; 
    }  m_player;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithPlayer:(struct WeakPtr<WebCore::MediaPlayerPrivateAVFoundationObjC> { struct RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > { struct WeakPtrImpl {} *x_1_1_1; } x1; }*)arg1;
- (void)outputMediaDataWillChange:(id)arg1;
- (void)outputSequenceWasFlushed:(id)arg1;

@end
