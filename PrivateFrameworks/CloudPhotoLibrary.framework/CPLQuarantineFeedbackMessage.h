/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLQuarantineFeedbackMessage : CPLFeedbackMessage {
    NSString * _reason;
    Class  _recordClass;
}

@property (nonatomic, readonly) NSString *reason;
@property (nonatomic, readonly) Class recordClass;

+ (id)feedbackType;

- (void).cxx_destruct;
- (id)initWithClass:(Class)arg1 reason:(id)arg2;
- (id)reason;
- (Class)recordClass;
- (id)serverMessage;

@end
