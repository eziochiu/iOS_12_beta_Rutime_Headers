/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMVideoLocalPersistenceResult : NSObject <NSSecureCoding> {
    NSDate * _creationDate;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _duration;
    NSError * _error;
    NSURL * _filteredLinkedDestinationURL;
    NSURL * _filteredLocalDestinationURL;
    NSURL * _linkedDestinationURL;
    NSURL * _localDestinationURL;
    NSString * _localPersistenceUUID;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillDisplayTime;
    NSString * _stillPersistenceUUID;
}

@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly, copy) NSURL *filteredLinkedDestinationURL;
@property (nonatomic, readonly, copy) NSURL *filteredLocalDestinationURL;
@property (nonatomic, readonly, copy) NSURL *linkedDestinationURL;
@property (nonatomic, readonly, copy) NSURL *localDestinationURL;
@property (nonatomic, readonly, copy) NSString *localPersistenceUUID;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } stillDisplayTime;
@property (nonatomic, readonly, copy) NSString *stillPersistenceUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)creationDate;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)filteredLinkedDestinationURL;
- (id)filteredLocalDestinationURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 filteredLocalDestinationURL:(id)arg2 linkedURL:(id)arg3 filteredLinkedURL:(id)arg4 UUID:(id)arg5 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg6 stillPersistenceUUID:(id)arg7 stillDisplayTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg8 creationDate:(id)arg9 error:(id)arg10;
- (id)linkedDestinationURL;
- (id)localDestinationURL;
- (id)localPersistenceUUID;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })stillDisplayTime;
- (id)stillPersistenceUUID;

@end
