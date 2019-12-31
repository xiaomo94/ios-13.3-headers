/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreAudio.framework/CoreAudio
 */

@interface Core_Audio_XPC_Connection_To_Server : NSObject {
    NSXPCConnection * _current_connection;
    bool  _definitely_die;
    bool  _first_contact;
    struct weak_ptr<HAL_Server_Lifetime_Events> { 
        struct HAL_Server_Lifetime_Events {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _lifetime_event_handler;
    NSObject<OS_dispatch_queue> * _lifetime_event_queue;
    int  _notify_token;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _registered_for_notification;
    bool  _server_is_dead;
}

@property (nonatomic, retain) NSXPCConnection *current_connection;
@property bool definitely_die;
@property bool first_contact;
@property (nonatomic) struct weak_ptr<HAL_Server_Lifetime_Events> { struct HAL_Server_Lifetime_Events {} *x1; struct __shared_weak_count {} *x2; } lifetime_event_handler;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *lifetime_event_queue;
@property int notify_token;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property bool registered_for_notification;
@property bool server_is_dead;

+ (id)server;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_lazy_get_connection;
- (void)add_connection:(id)arg1;
- (void)create;
- (id)current_connection;
- (void)dealloc;
- (bool)definitely_die;
- (bool)do_ping:(id)arg1;
- (bool)first_contact;
- (id)get_proxy:(id /* block */)arg1;
- (void)handle_server_death;
- (void)handle_server_resurrection;
- (id)init;
- (id)lazy_get_connection;
- (struct weak_ptr<HAL_Server_Lifetime_Events> { struct HAL_Server_Lifetime_Events {} *x1; struct __shared_weak_count {} *x2; })lifetime_event_handler;
- (id)lifetime_event_queue;
- (int)notify_token;
- (id)queue;
- (void)register_for_resurrection_notification;
- (bool)registered_for_notification;
- (void)remove_connection;
- (void)send_first_contact;
- (void)send_server_died;
- (void)send_server_resurrected;
- (bool)server_is_dead;
- (void)setCurrent_connection:(id)arg1;
- (void)setDefinitely_die:(bool)arg1;
- (void)setFirst_contact:(bool)arg1;
- (void)setLifetime_event_handler:(struct weak_ptr<HAL_Server_Lifetime_Events> { struct HAL_Server_Lifetime_Events {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setNotify_token:(int)arg1;
- (void)setRegistered_for_notification:(bool)arg1;
- (void)setServer_is_dead:(bool)arg1;

@end
