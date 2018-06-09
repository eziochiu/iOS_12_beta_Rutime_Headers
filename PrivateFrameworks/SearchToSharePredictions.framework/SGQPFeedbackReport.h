/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchToSharePredictions.framework/SearchToSharePredictions
 */

@interface SGQPFeedbackReport : NSObject <NSSecureCoding> {
    NSString * _body;
    NSString * _subject;
    NSString * _to;
}

@property (nonatomic, readonly) NSString *body;
@property (nonatomic, readonly) NSString *subject;
@property (nonatomic, readonly) NSString *to;

+ (id)feedbackReportForPredictions:(id)arg1 messages:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)body;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTo:(id)arg1 subject:(id)arg2 body:(id)arg3;
- (id)subject;
- (id)to;

@end
