/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

@interface TXRParserBase : NSObject {
    unsigned int  _bitsPerPixel;
    unsigned int  _blockHeight;
    unsigned int  _blockWidth;
    unsigned int  _bytesPerRow;
    unsigned int  _depth;
    unsigned int  _height;
    NSData * _imageData;
    BOOL  _imageHasAlpha;
    unsigned int  _imageOrientation;
    unsigned int  _numArrayElements;
    unsigned int  _numFaces;
    unsigned int  _numMipmapLevels;
    unsigned int  _numPixelComponents;
    unsigned int  _pixelFormat;
    unsigned int  _pixelFormatIsCompressed;
    unsigned int  _sampleCount;
    unsigned int  _width;
}

@property (nonatomic) unsigned int bitsPerPixel;
@property (nonatomic) unsigned int blockHeight;
@property (nonatomic) unsigned int blockWidth;
@property (nonatomic) unsigned int bytesPerRow;
@property (nonatomic) unsigned int depth;
@property (nonatomic) unsigned int height;
@property (nonatomic, retain) NSData *imageData;
@property (nonatomic) BOOL imageHasAlpha;
@property (nonatomic) unsigned int imageOrientation;
@property (nonatomic) unsigned int numArrayElements;
@property (nonatomic) unsigned int numFaces;
@property (nonatomic) unsigned int numMipmapLevels;
@property (nonatomic) unsigned int numPixelComponents;
@property (nonatomic) unsigned int pixelFormat;
@property (nonatomic) unsigned int pixelFormatIsCompressed;
@property (nonatomic) unsigned int sampleCount;
@property (nonatomic) unsigned int width;

- (void).cxx_destruct;
- (unsigned int)bitsPerPixel;
- (unsigned int)blockHeight;
- (unsigned int)blockWidth;
- (unsigned int)bytesPerRow;
- (unsigned int)depth;
- (unsigned int)height;
- (id)imageData;
- (BOOL)imageHasAlpha;
- (unsigned int)imageOrientation;
- (unsigned int)numArrayElements;
- (unsigned int)numFaces;
- (unsigned int)numMipmapLevels;
- (unsigned int)numPixelComponents;
- (unsigned int)pixelFormat;
- (unsigned int)pixelFormatIsCompressed;
- (unsigned int)sampleCount;
- (void)setBitsPerPixel:(unsigned int)arg1;
- (void)setBlockHeight:(unsigned int)arg1;
- (void)setBlockWidth:(unsigned int)arg1;
- (void)setBytesPerRow:(unsigned int)arg1;
- (void)setDepth:(unsigned int)arg1;
- (void)setHeight:(unsigned int)arg1;
- (void)setImageData:(id)arg1;
- (void)setImageHasAlpha:(BOOL)arg1;
- (void)setImageOrientation:(unsigned int)arg1;
- (void)setNumArrayElements:(unsigned int)arg1;
- (void)setNumFaces:(unsigned int)arg1;
- (void)setNumMipmapLevels:(unsigned int)arg1;
- (void)setNumPixelComponents:(unsigned int)arg1;
- (void)setPixelFormat:(unsigned int)arg1;
- (void)setPixelFormatIsCompressed:(unsigned int)arg1;
- (void)setSampleCount:(unsigned int)arg1;
- (void)setWidth:(unsigned int)arg1;
- (unsigned int)width;

@end