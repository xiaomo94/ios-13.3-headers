/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface _GGLDisplayLinkTarget : NSObject {
    struct weak_ptr<ggl::RunLoop::_RunLoopCallbacker> { 
        struct _RunLoopCallbacker {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _callbacker;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)displayLinkFired:(id)arg1;
- (id)initWithCallbacker:(struct weak_ptr<ggl::RunLoop::_RunLoopCallbacker> { struct _RunLoopCallbacker {} *x1; struct __shared_weak_count {} *x2; })arg1;

@end
