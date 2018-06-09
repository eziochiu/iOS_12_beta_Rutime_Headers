/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface _TimeStampValue : NSObject <GEOServerFormatTokenTimeStampValue> {
    NSString * _formatPattern;
    double  _timeStamp;
    NSTimeZone * _timeZone;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *formatPattern;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeStamp;
@property (nonatomic, readonly) NSTimeZone *timeZone;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)formatPattern;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeStamp:(double)arg1 timeZone:(id)arg2 formatPattern:(id)arg3;
- (double)timeStamp;
- (id)timeZone;

@end
