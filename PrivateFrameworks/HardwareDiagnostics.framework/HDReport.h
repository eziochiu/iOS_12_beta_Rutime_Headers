/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HardwareDiagnostics.framework/HardwareDiagnostics
 */

@interface HDReport : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _auxiliaryData;
    NSDate * _endTime;
    NSError * _error;
    NSMutableDictionary * _files;
    NSMutableArray * _results;
    NSDate * _startTime;
    long long  _status;
}

@property (nonatomic, copy) NSDictionary *auxiliaryData;
@property (nonatomic, copy) NSDate *endTime;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSDictionary *files;
@property (nonatomic, readonly) NSArray *results;
@property (nonatomic, copy) NSDate *startTime;
@property (nonatomic, readonly) long long status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addFile:(id)arg1 forName:(id)arg2;
- (void)addResult:(id)arg1;
- (bool)attemptToSetPassed;
- (id)auxiliaryData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)endTime;
- (id)error;
- (void)failedForError:(id)arg1;
- (id)files;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)results;
- (void)setAuxiliaryData:(id)arg1;
- (void)setEndTime:(id)arg1;
- (void)setStartTime:(id)arg1;
- (id)startTime;
- (long long)status;

@end
