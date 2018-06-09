/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSURLProtocolResponse : NSObject {
    NSDictionary * _responseDictionary;
    AMSURLTaskInfo * _taskInfo;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) NSArray *dialogs;
@property (nonatomic, readonly) NSArray *pingURLs;
@property (nonatomic, retain) NSDictionary *responseDictionary;
@property (nonatomic, readonly) NSError *serverError;
@property (nonatomic, readonly) bool supportedProtocolVersion;
@property (nonatomic, retain) AMSURLTaskInfo *taskInfo;
@property (nonatomic, readonly) NSURL *versionMismatchURL;

- (void).cxx_destruct;
- (id)_valueForProtocolKey:(id)arg1;
- (id)account;
- (id)actions;
- (id)dialogs;
- (id)initWithTaskInfo:(id)arg1 decodedObject:(id)arg2;
- (id)pingURLs;
- (id)responseDictionary;
- (id)serverError;
- (void)setResponseDictionary:(id)arg1;
- (void)setTaskInfo:(id)arg1;
- (bool)supportedProtocolVersion;
- (id)taskInfo;
- (id)versionMismatchURL;

@end
