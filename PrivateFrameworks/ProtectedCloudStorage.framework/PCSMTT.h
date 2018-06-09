/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
 */

@interface PCSMTT : NSObject <NSSecureCoding> {
    NSUUID * _UUID;
    NSMutableArray * _completedPoints;
    NSUUID * _parentUUID;
    NSDate * _startTime;
    double  _time;
}

@property (readonly) NSUUID *UUID;
@property (retain) NSMutableArray *completedPoints;
@property (readonly) NSUUID *parentUUID;
@property (retain) NSDate *startTime;
@property (readonly) double time;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (void)completePoint:(id)arg1;
- (id)completedPoints;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMTT:(id)arg1;
- (id)jsonDict;
- (void)measure:(id)arg1 block:(id /* block */)arg2;
- (void)measure:(id)arg1 success:(bool)arg2 time:(double)arg3;
- (id)measurePoint:(id)arg1;
- (id)parentUUID;
- (void)setCompletedPoints:(id)arg1;
- (void)setStartTime:(id)arg1;
- (void)start;
- (id)startTime;
- (void)stop;
- (double)time;

@end