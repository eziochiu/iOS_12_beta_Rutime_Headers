/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFRecentsSearchOperation : MFContactsSearchOperation {
    NSString * _bundleIdentifier;
    unsigned long long  _implicitGroupThreshold;
    unsigned long long  _queryOptions;
}

+ (id)operationWithAddressBook:(void*)arg1 owner:(id)arg2 text:(id)arg3 taskID:(id)arg4 properties:(id)arg5 bundleIdentifier:(id)arg6 implicitGroupThreshold:(unsigned long long)arg7 queryOptions:(unsigned long long)arg8;

- (void)dealloc;
- (void)main;
- (unsigned long long)type;

@end
