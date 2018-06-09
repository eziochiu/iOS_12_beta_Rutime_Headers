/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNCDAllContainersPredicate : CNPredicate <CNCDContainerPredicate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)cn_coreDataPredicate;
- (id)cn_persistenceFilterRequest;
- (id)cn_topLevelFilter;

@end
