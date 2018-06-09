/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

@interface SiriCoreSymptomsReporter : NSObject

+ (id)sharedInstance;

- (void)_getTypeForError:(id)arg1 completion:(id /* block */)arg2;
- (id)_processNameForPid:(int)arg1;
- (id)_subtypeContextStringFromContext:(id)arg1;
- (void)reportIssueForError:(id)arg1 type:(long long)arg2 context:(id)arg3 processIdentifier:(int)arg4;
- (void)reportIssueForType:(id)arg1 subType:(id)arg2 context:(id)arg3 processIdentifier:(int)arg4;

@end
