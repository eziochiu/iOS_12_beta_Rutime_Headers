/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVOptionsTask : CoreDAVTask

@property (nonatomic) <CoreDAVOptionsTaskDelegate> *delegate;

- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)requestBody;

@end
