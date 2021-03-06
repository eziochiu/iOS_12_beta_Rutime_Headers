/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

@interface PVFaceIDModel : NSObject

+ (bool)addFaceObservations:(id)arg1 forPersonIdentifier:(id)arg2 toModel:(id)arg3 error:(id*)arg4;
+ (id)classifyFaceObservation:(id)arg1 withModel:(id)arg2 error:(id*)arg3;
+ (id)defaultConfiguration;
+ (id)faceObservationFromFaceprintData:(id)arg1;
+ (id)loadModelAtPath:(id)arg1 error:(id*)arg2;
+ (id)modelFileName;
+ (id)newMutablePersonsModel;
+ (bool)persistModel:(id)arg1 toPath:(id)arg2 error:(id*)arg3;

@end
