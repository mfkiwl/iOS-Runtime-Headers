/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSNumber;

@interface CIHueAdjust : CIFilter {
    NSNumber *inputAngle;
    CIImage *inputImage;
}

@property(copy) NSNumber * inputAngle;
@property(retain) CIImage * inputImage;

+ (id)customAttributes;

- (id)inputAngle;
- (id)inputImage;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputAngle:(id)arg1;
- (void)setInputImage:(id)arg1;

@end