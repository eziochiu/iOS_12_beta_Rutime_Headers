/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImportTimer : NSObject {
    NSDate * _endTime;
    NSDate * _startTime;
    unsigned char  _subtype;
    unsigned char  _type;
    id  _uuid;
}

@property (retain) NSDate *endTime;
@property (retain) NSDate *startTime;
@property unsigned char subtype;
@property unsigned char type;
@property (retain) id uuid;

- (void).cxx_destruct;
- (id)description;
- (double)duration;
- (id)endTime;
- (id)initWithType:(unsigned char)arg1 subtype:(unsigned char)arg2;
- (void)setEndTime:(id)arg1;
- (void)setStartTime:(id)arg1;
- (void)setSubtype:(unsigned char)arg1;
- (void)setType:(unsigned char)arg1;
- (void)setUuid:(id)arg1;
- (void)start;
- (id)startTime;
- (void)stop;
- (unsigned char)subtype;
- (unsigned char)type;
- (id)uuid;

@end
