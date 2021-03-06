/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCoreAVCaptureDeviceManagerObserver : NSObject {
    struct AVCaptureDeviceManager { int (**x1)(); struct WeakPtrFactory<WebCore::CaptureDeviceManager> { struct RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > { struct WeakPtrImpl {} *x_1_2_1; } x_2_1_1; } x2; struct RetainPtr<WebCoreAVCaptureDeviceManagerObserver> { void *x_3_1_1; } x3; struct Vector<WebCore::CaptureDevice, 0, WTF::CrashOnOverflow, 16> { struct CaptureDevice {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; struct RetainPtr<NSMutableArray> { void *x_5_1_1; } x5; bool x6; } * m_callback;
}

- (void)deviceConnectedDidChange:(id)arg1;
- (void)disconnect;
- (id)initWithCallback:(struct AVCaptureDeviceManager { int (**x1)(); struct WeakPtrFactory<WebCore::CaptureDeviceManager> { struct RefPtr<WTF::WeakPtrImpl, WTF::DumbPtrTraits<WTF::WeakPtrImpl> > { struct WeakPtrImpl {} *x_1_2_1; } x_2_1_1; } x2; struct RetainPtr<WebCoreAVCaptureDeviceManagerObserver> { void *x_3_1_1; } x3; struct Vector<WebCore::CaptureDevice, 0, WTF::CrashOnOverflow, 16> { struct CaptureDevice {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; struct RetainPtr<NSMutableArray> { void *x_5_1_1; } x5; bool x6; }*)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
