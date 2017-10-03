#pragma once

//
// Flounder header file
//

#include "camera/Camera.hpp"
#include "camera/ICamera.hpp"
#include "camera/IPlayer.hpp"

#include "deferred/RendererDeferred.hpp"

#include "devices/Audio.hpp"
#include "devices/Display.hpp"
#include "devices/Joysticks.hpp"
#include "devices/Keyboard.hpp"
#include "devices/Mouse.hpp"

#include "engine/Engine.hpp"
#include "engine/IModule.hpp"
#include "engine/IUpdater.hpp"
#include "engine/ModuleUpdate.hpp"

#include "entities/components/ComponentAlpha.hpp"
#include "entities/Entity.hpp"
#include "entities/EntityRender.hpp"
#include "entities/IComponent.hpp"

#include "events/EventChange.hpp"
#include "events/Events.hpp"
#include "events/EventStandard.hpp"
#include "events/EventTime.hpp"
#include "events/IEvent.hpp"

#include "fbos/DepthBuffer.hpp"
#include "fbos/Fbo.hpp"

#include "fonts/Character.hpp"
#include "fonts/FontType.hpp"
#include "fonts/Line.hpp"
#include "fonts/Metafile.hpp"
#include "fonts/RendererFonts.hpp"
#include "fonts/Text.hpp"
#include "fonts/Word.hpp"

#include "guis/Gui.hpp"
#include "guis/RendererGuis.hpp"

#include "helpers/HelperArray.hpp"
#include "helpers/HelperFile.hpp"
#include "helpers/HelperString.hpp"

#include "inputs/AxisButton.hpp"
#include "inputs/AxisCompound.hpp"
#include "inputs/AxisJoystick.hpp"
#include "inputs/ButtonCompound.hpp"
#include "inputs/ButtonJoystick.hpp"
#include "inputs/ButtonKeyboard.hpp"
#include "inputs/ButtonMouse.hpp"
#include "inputs/IAxis.hpp"
#include "inputs/IButton.hpp"

#include "lights/Attenuation.hpp"
#include "lights/Fog.hpp"
#include "lights/Light.hpp"

#include "maths/Colour.hpp"
#include "maths/Delta.hpp"
#include "maths/Maths.hpp"
#include "maths/Matrix2.hpp"
#include "maths/Matrix3.hpp"
#include "maths/Matrix4.hpp"
#include "maths/Quaternion.hpp"
#include "maths/Timer.hpp"
#include "maths/Transform.hpp"
#include "maths/Vector2.hpp"
#include "maths/Vector3.hpp"
#include "maths/Vector4.hpp"

#include "models/Model.hpp"
#include "models/VertexData.hpp"

#include "noise/NoiseFast.hpp"

#include "particles/Particle.hpp"
#include "particles/Particles.hpp"
#include "particles/ParticleSystem.hpp"
#include "particles/ParticleType.hpp"
#include "particles/RendererParticles.hpp"
#include "particles/spawns/ISpawnParticle.hpp"
#include "particles/spawns/SpawnCircle.hpp"
#include "particles/spawns/SpawnLine.hpp"
#include "particles/spawns/SpawnPoint.hpp"
#include "particles/spawns/SpawnSphere.hpp"

#include "physics/Aabb.hpp"
#include "physics/Frustum.hpp"
#include "physics/ICollider.hpp"
#include "physics/Intersect.hpp"
#include "physics/Ray.hpp"
#include "physics/Sphere.hpp"

#include "platforms/glfw/GlfwUpdater.hpp"
#include "platforms/glfw/GlfwVulkan.hpp"

#include "post/filters/FilterBloom1.hpp"
#include "post/filters/FilterBloom2.hpp"
#include "post/filters/FilterBlurHorizontal.hpp"
#include "post/filters/FilterBlurVertical.hpp"
#include "post/filters/FilterCombine.hpp"
#include "post/filters/FilterCrt.hpp"
#include "post/filters/FilterDarken.hpp"
#include "post/filters/FilterDefault.hpp"
#include "post/filters/FilterEmboss.hpp"
#include "post/filters/FilterFxaa.hpp"
#include "post/filters/FilterGrain.hpp"
#include "post/filters/FilterGrey.hpp"
#include "post/filters/FilterLensflare.hpp"
#include "post/filters/FilterMotion.hpp"
#include "post/filters/FilterNegative.hpp"
#include "post/filters/FilterPixel.hpp"
#include "post/filters/FilterSepia.hpp"
#include "post/filters/FilterTiltshift.hpp"
#include "post/filters/FilterTone.hpp"
#include "post/filters/FilterWobble.hpp"
#include "post/IPostFilter.hpp"
#include "post/IPostPipeline.hpp"
#include "post/pipelines/PipelineBloom.hpp"
#include "post/pipelines/PipelineGaussian.hpp"
#include "post/pipelines/PipelinePaused.hpp"

#include "processing/graphic/ProcessorGraphic.hpp"
#include "processing/graphic/RequestGraphic.hpp"
#include "processing/IProcessor.hpp"
#include "processing/IRequest.hpp"
#include "processing/Processing.hpp"
#include "processing/Queue.hpp"
#include "processing/resource/ProcessorResource.hpp"
#include "processing/resource/RequestResource.hpp"

#include "renderer/buffers/Buffer.hpp"
#include "renderer/buffers/IndexBuffer.hpp"
#include "renderer/buffers/UniformBuffer.hpp"
#include "renderer/buffers/Vertex.hpp"
#include "renderer/buffers/VertexBuffer.hpp"
#include "renderer/IManagerRender.hpp"
#include "renderer/IRenderer.hpp"
#include "renderer/pass/RenderPass.hpp"
#include "renderer/pipelines/Pipeline.hpp"
#include "renderer/queue/QueueFamily.hpp"
#include "renderer/Renderer.hpp"
#include "renderer/stencils/DepthStencil.hpp"
#include "renderer/swapchain/Swapchain.hpp"

#include "shaders/Shader.hpp"
#include "shaders/ShaderType.hpp"
#include "shadows/RendererShadows.hpp"
#include "shadows/ShadowBox.hpp"
#include "shadows/Shadows.hpp"

#include "skyboxes/RendererSkyboxes.hpp"
#include "skyboxes/Skybox.hpp"
#include "skyboxes/Skyboxes.hpp"

#include "sounds/Sound.hpp"

#include "space/ISpatialObject.hpp"
#include "space/ISpatialStructure.hpp"
#include "space/StructureBasic.hpp"

#include "standards/IStandard.hpp"
#include "standards/Standards.hpp"

#include "stb/stb_image.h"

#include "tasks/Tasks.hpp"

#include "test/RendererTest.hpp"

#include "terrains/Biome.hpp"
#include "terrains/RendererTerrains.hpp"
#include "terrains/Terrain.hpp"
#include "terrains/Terrains.hpp"
#include "textures/Texture.hpp"

#include "uis/ContainerScreen.hpp"
#include "uis/IManagerUis.hpp"
#include "uis/InputButton.hpp"
#include "uis/InputDelay.hpp"
#include "uis/InputGrabber.hpp"
#include "uis/InputSlider.hpp"
#include "uis/InputText.hpp"
#include "uis/OverlayStartup.hpp"
#include "uis/UiAlign.hpp"
#include "uis/UiObject.hpp"
#include "uis/Uis.hpp"
#include "uis/UiSelector.hpp"

#include "visual/DriverBounce.hpp"
#include "visual/DriverConstant.hpp"
#include "visual/DriverFade.hpp"
#include "visual/DriverLinear.hpp"
#include "visual/DriverSinwave.hpp"
#include "visual/DriverSlide.hpp"
#include "visual/IDriver.hpp"
#include "visual/interpolation/SmoothFloat.hpp"

#include "waters/RendererWaters.hpp"
#include "waters/Water.hpp"
#include "waters/Waters.hpp"
#include "worlds/Worlds.hpp"
