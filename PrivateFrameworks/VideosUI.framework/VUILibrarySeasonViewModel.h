/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUILibrarySeasonViewModel : NSObject <NSCopying> {
    NSObject<VUIMediaEntityIdentifier> * _seasonIdentifier;
    unsigned long long  _type;
}

@property (nonatomic, readonly) NSObject<VUIMediaEntityIdentifier> *seasonIdentifier;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithSeasonIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)seasonIdentifier;
- (unsigned long long)type;

@end