/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSNowPlayingArtworkRequest : HSRequest {
    unsigned int  _interfaceID;
    struct CGSize { 
        double width; 
        double height; 
    }  _maximumSize;
    unsigned int  _playQueueIndex;
}

@property (nonatomic, readonly) unsigned int interfaceID;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } maximumSize;
@property (nonatomic, readonly) unsigned int playQueueIndex;

- (id)canonicalResponseForResponse:(id)arg1;
- (id)initWithInterfaceID:(unsigned int)arg1 maximumSize:(struct CGSize { double x1; double x2; })arg2 playQueueIndex:(unsigned int)arg3;
- (unsigned int)interfaceID;
- (struct CGSize { double x1; double x2; })maximumSize;
- (unsigned int)playQueueIndex;

@end
