/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKFetchBooksRequest : CATTaskRequest {
    bool  _includeImages;
}

@property (nonatomic) bool includeImages;

+ (bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)arg1;
- (bool)includeImages;
- (id)initWithCoder:(id)arg1;
- (void)setIncludeImages:(bool)arg1;

@end