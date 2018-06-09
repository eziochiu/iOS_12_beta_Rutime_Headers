/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsETA : NSObject <NSCopying, NSSecureCoding> {
    CLLocation * _location;
    NSString * _longTrafficString;
    NSString * _originator;
    double  _seconds;
    NSString * _shortTrafficString;
    NSDate * _time;
    int  _transportType;
}

@property (nonatomic, readonly) double age;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) NSString *longTrafficString;
@property (nonatomic, readonly) NSString *originator;
@property (nonatomic, readonly) double seconds;
@property (nonatomic, readonly) NSString *shortTrafficString;
@property (nonatomic, readonly) NSDate *time;
@property (nonatomic, readonly) int transportType;

+ (id)ETAWithData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)age;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSeconds:(double)arg1 shortTrafficString:(id)arg2 longTrafficString:(id)arg3 transportType:(int)arg4 location:(id)arg5 time:(id)arg6;
- (id)initWithSeconds:(double)arg1 shortTrafficString:(id)arg2 longTrafficString:(id)arg3 transportType:(int)arg4 location:(id)arg5 time:(id)arg6 originator:(id)arg7;
- (id)initWithSeconds:(double)arg1 trafficString:(id)arg2 transportType:(int)arg3 location:(id)arg4;
- (bool)isValidForLocation:(id)arg1 requirements:(id)arg2;
- (id)location;
- (id)longTrafficString;
- (id)originator;
- (double)seconds;
- (id)shortTrafficString;
- (id)time;
- (id)trafficString;
- (int)transportType;

@end
