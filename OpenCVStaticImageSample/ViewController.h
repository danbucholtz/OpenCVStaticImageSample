//
//  ViewController.h
//  OpenCVStaticImageSample
//
//  Created by Dan Bucholtz on 9/1/14.
//  Copyright (c) 2014 NXSW. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController{
    UIImageView * imageView;
    BOOL edgeDetectionEnabled;
}

@property (strong, nonatomic) IBOutlet UIImageView * imageView;

- (IBAction) toggleEdgeDetection;

@end