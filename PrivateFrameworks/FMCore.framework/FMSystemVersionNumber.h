/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

@interface FMSystemVersionNumber : NSObject {
    NSString * _baseLetter;
    long long  _baseNumber;
    long long  _buildNumber;
    NSString * _suffix;
}

@property (nonatomic, copy) NSString *baseLetter;
@property (nonatomic) long long baseNumber;
@property (nonatomic) long long buildNumber;
@property (nonatomic, copy) NSString *suffix;

- (void).cxx_destruct;
- (id)baseLetter;
- (long long)baseNumber;
- (long long)buildNumber;
- (long long)compare:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)init;
- (id)initWithString:(id)arg1;
- (void)setBaseLetter:(id)arg1;
- (void)setBaseNumber:(long long)arg1;
- (void)setBuildNumber:(long long)arg1;
- (void)setSuffix:(id)arg1;
- (id)suffix;

@end
