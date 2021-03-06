/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADNotificationCountOperationGroup : CADOperationGroup <CADNotificationCountInterface>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)requiresEventAccess;
+ (bool)requiresEventOrReminderAccess;
+ (bool)requiresReminderAccess;

- (void)CADDatabaseGetNotificationCount:(id /* block */)arg1;

@end
