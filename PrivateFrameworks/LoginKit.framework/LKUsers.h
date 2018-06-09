/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
 */

@interface LKUsers : NSObject <LKStudentProviding> {
    NSArray * _students;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *students;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithUsers:(id)arg1;
- (void)setStudents:(id)arg1;
- (id)students;

@end
