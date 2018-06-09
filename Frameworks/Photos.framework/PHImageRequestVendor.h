/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImageRequestVendor : PHRecyclableObjectVendor

+ (id)sharedImageRequestVendor;

- (id)dequeueRecyclableObjectWithRequestID:(int)arg1 contextID:(unsigned long long)arg2 managerID:(unsigned long long)arg3 asset:(id)arg4 displaySpec:(id)arg5 behaviorSepc:(id)arg6;
- (id)init;

@end
