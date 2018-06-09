/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelLibraryDeleteEntityChangeRequest : NSObject <NSCopying> {
    MPModelObject * _modelObject;
}

@property (nonatomic, retain) MPModelObject *modelObject;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)modelObject;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (void)performWithResponseHandler:(id /* block */)arg1;
- (void)setModelObject:(id)arg1;

@end
