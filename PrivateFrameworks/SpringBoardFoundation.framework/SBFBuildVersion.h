/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFBuildVersion : NSObject {
    NSString * _majorBuildLetterString;
    long long  _majorBuildNumber;
    NSString * _minorBuildLetterString;
    long long  _minorBuildNumber;
    NSString * _stringRepresentation;
}

@property (nonatomic, readonly, copy) NSString *majorBuildLetterString;
@property (nonatomic, readonly) long long majorBuildNumber;
@property (nonatomic, readonly, copy) NSString *minorBuildLetterString;
@property (nonatomic, readonly) long long minorBuildNumber;
@property (nonatomic, readonly, copy) NSString *stringRepresentation;

- (void).cxx_destruct;
- (long long)compareBuildVersion:(id)arg1 withPrecision:(long long)arg2;
- (long long)compareBuildVersionString:(id)arg1 withPrecision:(long long)arg2;
- (id)description;
- (unsigned long long)hash;
- (id)initWithString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)majorBuildLetterString;
- (long long)majorBuildNumber;
- (id)minorBuildLetterString;
- (long long)minorBuildNumber;
- (id)stringRepresentation;

@end
