/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKCloudTuple : NSObject {
    <CRKCloudStoring> * _changedObject;
    <CRKCloudStoring> * _originalObject;
}

@property (nonatomic, readonly) <CRKCloudStoring> *changedObject;
@property (nonatomic, readonly) <CRKCloudStoring> *originalObject;

+ (id)new;

- (void).cxx_destruct;
- (id)changedObject;
- (id)init;
- (id)initWithChangedObject:(id)arg1 originalObject:(id)arg2;
- (id)originalObject;

@end
