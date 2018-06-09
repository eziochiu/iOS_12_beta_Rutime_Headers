/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface TestCNUIIDSHandleAvailability : NSObject <CNUIIDSHandleAvailability> {
    bool  _available;
    <CNUIIDSHandle> * _handle;
}

@property (nonatomic) bool available;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <CNUIIDSHandle> *handle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAvailable;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)available;
- (id)handle;
- (unsigned long long)hash;
- (id)initWithHandle:(id)arg1 availability:(bool)arg2;
- (bool)isAvailable;
- (bool)isEqual:(id)arg1;
- (void)setAvailable:(bool)arg1;
- (void)setHandle:(id)arg1;

@end
